using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatGameDataChampionSummary
    {
        [DataMember(Name = "alias")]
        string Alias { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

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