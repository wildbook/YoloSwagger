using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyCustomGameLobby
    {
        [DataMember(Name = "configuration")]
        public LolLobbyLobbyCustomGameConfiguration Configuration { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "lobbyName")]
        public string LobbyName { get; set; }

        [DataMember(Name = "lobbyPassword")]
        public string LobbyPassword { get; set; }

        [DataMember(Name = "practiceGameRewardsDisabledReasons")]
        public string[] PracticeGameRewardsDisabledReasons { get; set; }

        [DataMember(Name = "spectators")]
        public LolLobbyLobbyMember[] Spectators { get; set; }

        [DataMember(Name = "teamOne")]
        public LolLobbyLobbyMember[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public LolLobbyLobbyMember[] TeamTwo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyCustomGameLobby {\n");
            sb.Append("  Configuration: ").Append(Configuration).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  LobbyName: ").Append(LobbyName).Append("\n");
            sb.Append("  LobbyPassword: ").Append(LobbyPassword).Append("\n");
            sb.Append("  PracticeGameRewardsDisabledReasons: ").Append(PracticeGameRewardsDisabledReasons).Append("\n");
            sb.Append("  Spectators: ").Append(Spectators).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}