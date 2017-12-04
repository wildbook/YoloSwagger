using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SeriesDTO {
    [DataMember(Name = "startDate")]
    long StartDate {get; set;}

    [DataMember(Name = "internalName")]
    string InternalName {get; set;}

    [DataMember(Name = "endDate")]
    long EndDate {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "tags")]
    string[] Tags {get; set;}

    [DataMember(Name = "media")]
    SeriesMediaDTO Media {get; set;}

    [DataMember(Name = "parentName")]
    string ParentName {get; set;}

    [DataMember(Name = "warnings")]
    SeriesAlertDTO[] Warnings {get; set;}

    [DataMember(Name = "title")]
    string Title {get; set;}

    [DataMember(Name = "id")]
    string Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SeriesDTO {\n");
      sb.Append("  StartDate: ").Append(StartDate).Append("\n");
      sb.Append("  InternalName: ").Append(InternalName).Append("\n");
      sb.Append("  EndDate: ").Append(EndDate).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      sb.Append("  Media: ").Append(Media).Append("\n");
      sb.Append("  ParentName: ").Append(ParentName).Append("\n");
      sb.Append("  Warnings: ").Append(Warnings).Append("\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}