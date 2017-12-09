using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolAcsAcsChampionGames
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "lane")]
        public string Lane { get; set; }

        [DataMember(Name = "queue")]
        public int Queue { get; set; }

        [DataMember(Name = "role")]
        public string Role { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolAcsAcsChampionGames {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Lane: ").Append(Lane).Append("\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}