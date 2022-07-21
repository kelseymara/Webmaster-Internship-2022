
# Weeks One-Four

## Week One 
I have two days of orientation and career-readiness training this week that consists of various workshops and trainings that prepared and provided me with general skills needed to succed in the workforce. Some of these topics included financial literacy and development of professional goals. Unfortunately, I was only able to attend one day because I was sick. I met some of the other interns who will be working with me and I intitiated creating a discord group chat.

## Week Two 
This is the first full week of my internship. I met my supervisor and the 2 division webmasters. We got assigned onboarding training modules that are built into the educational content management system they use. These modules provided an overview of how to use different features included in the content management system such as content elements and layout elements. 
One thing my supervisor emphasized was how important it is for the website to be Americans with Disabilities Act (ADA) Compliant. There is an Accessibility Checker tool built into the content management system that we have to use whenever we create content. 

## Week Three
The school division webmasters assigned the 12 schools we will be working on throughout the internship in a shared Google Sheets. The Google Sheets is an Intern Work Assignment Tracker where we have to document what day we started and completed each website, along with comments about each website. 
They explained our assignment, which is pretty much replicating the old website onto the new one and fixing any links that aren't working and creating the content in a way that it is consistent to the other school pages. 
I did a lot of internal and external linking; for example, I had to link each Code of Conduct page to an external PDF resource of the Code of Conduct.
I fixed some text through the HTML tool, like changing a pargraph into a heading and making sure that the levels of headings structures was used correctly.
<br />
Snippet of before code: 
```html
<h1>Our School</h1>
<p><strong>Overview</strong></p><br />
<p><strong>Philosophy and Mission Statement</strong></p>
```
Snippet of after code: 
```html
<h1>Our school</h1>
<h2>Overview</h2>
<h3>Philosophy and Mission Statement</h3>
```


## Week Four 
One thing I am doing for the websites is editing the pages to make it more readable to a screenreader and more ADA accessible. 
For example, for the school supplies list pages for each website, the HTML has one pargraph with a break between each item to position it on the next line. Although this looks fine without looking at the HTML code, it would be more ADA accesible if it is coded using an actual list attribute. I changed the school supplies page for each of my assigned school websites. 
<br />
Here is a snippet of the before code:
```html
<p>
#2 Pencils <br />
3-inch Binder <br />
3 Ruled Index Cards <br />
Blunt-Tipped Scissors <br />
Colored Pencils </p>
```
Here is a snippet of the after code:
```html
<ul style="list-style-type:none;">
<li>#2 Pencils</li>
<li>3-inch Binder</li>
<li>Blunt-Tipped Scissors</li>
<li>Colored Pencils</li>
</ul>
```
