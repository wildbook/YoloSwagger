using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatGameDataChampionSummary
    {
        [DataMember(Name = "alias")]
        public string Alias { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatGameDataChampionSummary {\n");
            sb.Append("  Alias: ").Append(Alias).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}