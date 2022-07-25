
# Weeks One-Four

## Week One 
I had two days of orientation and career-readiness training this week that consisted of various workshops and trainings preparing and providing me with general skills needed to succeed in the workforce. Some of these topics included financial literacy and development of professional goals. Unfortunately, I was only able to attend one day because I was sick. I met some of the other interns who will be working with me and I intitiated creating a discord group chat.

## Week Two 
This was the first full week of my internship. I met my supervisor and the 2 division webmasters. We got assigned onboarding training modules that are built into the educational content management system they use. These modules provided an overview of how to use different features included in the content management system such as content elements and layout elements. 
One thing my supervisor emphasized was how important it is for the website to be Americans with Disabilities Act (ADA) Compliant. There is an Accessibility Checker tool built into the content management system that we have to use whenever we create content. 

## Week Three
The school division webmasters assigned the 12 schools we will be working on throughout the internship in a shared Google Sheets. The Google Sheets is an Intern Work Assignment Tracker where we have to document what day we started and completed each website, along with comments about each website. 
They explained our assignment, which is pretty much replicating the old website onto the new one, fixing any links that aren't working, and creating the content in a way that it is consistent to the other school pages. 
I did a lot of internal and external linking; for example, I had to link each Code of Conduct page to an external PDF resource of the Code of Conduct. Some external websites could not be linked because they were not ADA accessible.
<br> 

I fixed text through the HTML tool, such as changing a pargraph into a heading and making sure that the levels of headings structures was used correctly. These types of errors in the websites were very common. 
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
Our supervisor is always hungry for questions from us, whether it's a work related question or a "life" question. I asked him what he thinks the trend for remote work will be like in the upcoming years, and he thinks the trend will continue for technology positions that are able to be offered remotely.
He also mentioned that when he worked remotely during the COVID outbreak that he was the most physically and mentally healthy that he has ever been, so the benefits of remote work are very apparent. Ideally I would like to get a remote or hybrid job in the future, so it's very comforting to hear the opinion of adults on the remote work trend.

This week had a slow start because there was a holiday on Monday and it was our first hands on exposure on the websites, but the pace picked up later in the week.


## Week Four 
One thing I am doing for the websites is editing the pages to make it more readable to a screenreader and more ADA accessible. 
For example, for the school supplies list pages for each website, the HTML has one paragraph with a break between each item to position it on the next line. Although this looks fine without looking at the HTML code, it would be more ADA accesible if it is coded using an actual list attribute. I changed the school supplies page for each of my assigned school websites. 
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
<br>
The school division webmasters gave us custom CSS code and HTML code they coded to create a cohesive "Our Staff" page across all school websites.

<br>
Instead of merely just copying and pasting the code, I made sure to throughouly read through the code and think about the thought process behind the code.

<details>

<summary>CSS code</summary>

```CSS
<style type="text/css">
* {
  box-sizing: border-box;
}

#myInput {
  background-image: url('/css/searchicon.png');
  background-position: 10px 10px;
  background-repeat: no-repeat;
  width: 100%;
  font-size: 16px;
  padding: 12px 20px 12px 40px;
  border: 1px solid #ddd;
  margin-bottom: 12px;
}

.myTable {
  border-collapse: collapse;
  width: 100%;
  border: 1px solid #ddd;
  font-size: 18px;
}

.myTable th, .myTable td {
  text-align: left;
  padding: 12px;
}

.myTable tr {
  border-bottom: 1px solid #ddd;
}

.myTable tr.header, .myTable tr:hover {
  background-color: #f1f1f1;
}
</style>

```
</details>

<details>

<summary>CSS code notes</summary>

```CSS
<style type="text/css"> 
- type attribute specifies "text/css" media type of the <style> tag  

#myInput
- # is an id selector used to target a specific element, here it is an input element 

background-image: url('/css/searchicon.png');
background-position: 10px 10px;
background-repeat: no-repeat;
width: 100%;
font-size: 16px;
padding: 12px 20px 12px 40px;
border: 1px solid #ddd;
margin-bottom: 12px;
- poisitions a background image

.myTable th, .myTable td {
  text-align: left;
  padding: 12px;
}
- th= table heading
- td= table data 
- aligns it to the left with 12px padding/space around the element's content inside the borders
.myTable tr {
  border-bottom: 1px solid #ddd;
}
- tr= table row, #ddd is color of row border bottom

```
</details>








<details>

<summary>HTML code</summary>

```HTML
<table class="myTable">
	<tbody>
		<tr class="header">
			<th style="width:60%;">Name</th>
			<th style="width:40%;">Position</th>
			<th style="width:40%;">Extension</th>
		</tr>
		<tr style="">
			<td>John Doe</td>
			<td>Staff Position</td>
			<td>757.263.****</td>
		</tr>
	</tbody>
</table>

```
</details>


<details>

<summary>HTML Notes</summary>

``` HTML

<table class="myTable">
  - table class atribute

<tbody> 
  - starts the body of table, end it later on with </tbody>

<tr class="header">
<th style="width:60%;">Name</th>
- uses tr (table row) class header
- styles th (table heading) with custom width and names it "Name"

-
<tr style="">
			<td>John Doe</td>
- another tr (table row) but not a header
- td (table data) John Doe

```
</details>

