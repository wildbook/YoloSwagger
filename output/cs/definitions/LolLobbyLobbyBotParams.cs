using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyBotParams
    {
        [DataMember(Name = "teamId")]
        string TeamId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "botDifficulty")]
        LolLobbyLobbyBotDifficulty BotDifficulty { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyBotParams {\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  BotDifficulty: ").Append(BotDifficulty).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}