using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameDataSummonerSpell
    {
        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "summonerLevel")]
        public uint SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameDataSummonerSpell {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}