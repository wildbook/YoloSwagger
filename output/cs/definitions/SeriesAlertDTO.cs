using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct SeriesAlertDTO
    {
        [DataMember(Name = "alertTime")]
        public long AlertTime { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SeriesAlertDTO {\n");
            sb.Append("  AlertTime: ").Append(AlertTime).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}