# Method 1 -> fixing is needed
print(" \n", "Drag the image in this vs code folder & copy the path ")

number_of_pdfs = int(input("Enter number pdf files to be merged: "))

#merger = pdf.PdfMerger()
merger = pdf.PdfWriter()
pdfFiles = []

try:
    for i in range(number_of_pdfs):
        pdfs = input(f"PDF number {i+1} is: ")
        pdfFiles.append(pdfs)

    for filepath in pdfFiles:
        #pdfFile = open(filepath, 'rb')
        #pdfreader = pdf.PdfReader(pdfFile)
        merger.append(filepath)
    merger.write('merged.pdf')
    merger.close()
except:
    print(" \n", "Some ERROR occurred")