using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftPFTSurvey
    {
        [DataMember(Name = "caption")]
        public string Caption { get; set; }

        [DataMember(Name = "data")]
        public Dictionary<string, dynamic> Data { get; set; }

        [DataMember(Name = "display")]
        public string Display { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

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