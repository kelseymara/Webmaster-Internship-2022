# 🌞 Summer 2022 Webmaster Internship Overview

## Introduction

During summer 2022, I was a webmaster intern for my local school divsion. We had a project to recreate all of their school websites to create a cohesive layout. This was done by using an educational content management system (CMS), which allowed for efficient website management and updates.

## Learning Experience 📚
Although the websites were built using a CMS, I took the initiative to acquire additional webmaster knowledge and improve my skills in HTML and CSS. I found immense value in utilizing the built-in HTML tool, which allowed me to make direct modifications to the website's code.

## Improving Accessibility 🔧
One thing my supervisor stressed throughout the internship is how important it is for the websites to be ADA accessible. There was an Accessibility Checker Tool built into the CMS that I used whenever I created content. Despite its use, I remained diligent in manually inspecting the HTML to ensure optimal accessibility. For example, on the school supplies pages, I noticed that many websites listed the supplies as paragraphs with line breaks. This passed the Accesiblity Checker Tool, but I decided to change it to an unordered list so that it is more readable to a screenreader.

Here is a snippet of the before code: 
```HTML
<p>
#2 Pencils <br />
3-inch Binder <br />
3 Ruled Index Cards <br />
Blunt-Tipped Scissors <br />
Colored Pencils </p>
```
Here is a snippet of the after code: 
```HTML
<ul style="list-style-type:none;">
<li>#2 Pencils</li>
<li>3-inch Binder</li>
<li>Blunt-Tipped Scissors</li>
<li>Colored Pencils</li>
</ul>
```

These type of errors were common in the school websites I worked on. 

Another example of a common error I found was an incorrect headings structure. Instead of using different headings, there were paragraphs 
that were bolded. Again, this usually passed the Accesiblity Checker, but I changed
the HTML to make it more readable to a screenreader.

Here is a snippet of the before code: 
```HTML
<h1>Our School</h1>
<p><strong>Overview</strong></p><br />
<p><strong>Philosophy and Mission Statement</strong></p>
```
Here is a snippet of the after code: 
```HTML
<h1>Our school</h1>
<h2>Overview</h2>
<h3>Philosophy and Mission Statement</h3>
```
## Conclusion 🎓
Throughout the summer, I proactively addressed errors like the ones mentioned above, taking great care to enhance the websites' accessibility and user experience. I worked closely with the school divsiion webmasters and other interns to make sure my work matched all the ADA compliance and school divsion requirements. Every week we got assigned more tasks, such as updating the staff page with a custom HTML and CSS table containing all the new teachers. All of these tasks contributed to the objective of creating a cohesiveness layout across all pages. 
