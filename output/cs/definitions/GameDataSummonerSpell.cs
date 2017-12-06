using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct GameDataSummonerSpell
    {
        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint SummonerLevel { get; set; }

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