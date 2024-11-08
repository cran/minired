% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/redatam-api.R
\name{redatam_close}
\alias{redatam_close}
\title{Close dictionary}
\usage{
redatam_close(dic)
}
\arguments{
\item{dic}{Dictionary ID (returned by 'redatam.open')}
}
\value{
{No return value.}
}
\description{
Close a REDATAM database.
}
\examples{
\dontrun{
dic<-redatam_open("path/to/rxdb")
# run some queries using 'query' or 'run'
redatam_close(dic);
}
}
\author{
Jaime Salvador
}
