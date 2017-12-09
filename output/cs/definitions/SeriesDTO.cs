using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SeriesDTO
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "endDate")]
        public long EndDate { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "internalName")]
        public string InternalName { get; set; }

        [DataMember(Name = "media")]
        public SeriesMediaDTO Media { get; set; }

        [DataMember(Name = "parentName")]
        public string ParentName { get; set; }

        [DataMember(Name = "startDate")]
        public long StartDate { get; set; }

        [DataMember(Name = "tags")]
        public string[] Tags { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        [DataMember(Name = "warnings")]
        public SeriesAlertDTO[] Warnings { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SeriesDTO {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  Media: ").Append(Media).Append("\n");
            sb.Append("  ParentName: ").Append(ParentName).Append("\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Warnings: ").Append(Warnings).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}