#include <iostream>

int main() {
    int a=301;
    int b=201;
    int c=a-b;

    std::cout << "The difference of a and b is: " << c << std::endl;  // output the result of subtraction

    // added dita-OT comment 
//     git commit -m “DITA-OT generates different anchor ids for nested <concept> elements
// depending on the output format. Plain-html (xhtml) uses simple ids
// (for example id="parquet_compression"), while asf-site-html (html5)
// uses scoped ids (for example id="parquet__parquet_compression"). Source
// xrefs such as href="#parquet_compression" therefore work in plain-html
// but not on the published asf-site-html docs, where the link href and
// section id no longer match.

// Updating the xref in topics/impala_parquet.xml is not sufficient on
// its own. Using a hierarchical href (#parquet/parquet_compression) fixes
// asf-site-html navigation but breaks plain-html unless link text is
// added explicitly and/or a separate plain-html post-processor is used;
// an empty xref with the hierarchical href also fails the DITA build
// (DOTX032E) because link text cannot be resolved automatically.

// Added fix-asf-site-html-fragments.py to rewrite broken fragment hrefs in
// asf-site-html output so they match scoped target ids, and invoke it
// from the Makefile after the html5 build. This keeps existing DITA
// source unchanged while fixing in-page navigation on impala.apache.org.”

    return 0;
}