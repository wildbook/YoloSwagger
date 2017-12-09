using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyBotParams
    {
        [DataMember(Name = "botDifficulty")]
        public LolLobbyLobbyBotDifficulty BotDifficulty { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "teamId")]
        public string TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyBotParams {\n");
            sb.Append("  BotDifficulty: ").Append(BotDifficulty).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}