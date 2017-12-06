using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTSurveyV1
    {
        [DataMember(Name = "caption")]
        string Caption { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "title")]
        string Title { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "url")]
        string Url { get; set; }

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