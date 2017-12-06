using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTSurvey
    {
        [DataMember(Name = "caption")]
        string Caption { get; set; }

        [DataMember(Name = "data")]
        Dictionary<string, dynamic> Data { get; set; }

        [DataMember(Name = "display")]
        string Display { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "title")]
        string Title { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTSurvey {\n");
            sb.Append("  Caption: ").Append(Caption).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Display: ").Append(Display).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}