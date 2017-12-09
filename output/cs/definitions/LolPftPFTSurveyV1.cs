using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftPFTSurveyV1
    {
        [DataMember(Name = "caption")]
        public string Caption { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "url")]
        public string Url { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTSurveyV1 {\n");
            sb.Append("  Caption: ").Append(Caption).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}