using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameflowLcdsGameDTO
    {
        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameState")]
        public string GameState { get; set; }

        [DataMember(Name = "gameType")]
        public string GameType { get; set; }

        [DataMember(Name = "gameTypeConfigId")]
        public int GameTypeConfigId { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "maxNumPlayers")]
        public int MaxNumPlayers { get; set; }

        [DataMember(Name = "playerChampionSelections")]
        public dynamic[] PlayerChampionSelections { get; set; }

        [DataMember(Name = "queueTypeName")]
        public string QueueTypeName { get; set; }

        [DataMember(Name = "spectatorDelay")]
        public int SpectatorDelay { get; set; }

        [DataMember(Name = "teamOne")]
        public dynamic[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public dynamic[] TeamTwo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameflowLcdsGameDTO {\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameState: ").Append(GameState).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  GameTypeConfigId: ").Append(GameTypeConfigId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  MaxNumPlayers: ").Append(MaxNumPlayers).Append("\n");
            sb.Append("  PlayerChampionSelections: ").Append(PlayerChampionSelections).Append("\n");
            sb.Append("  QueueTypeName: ").Append(QueueTypeName).Append("\n");
            sb.Append("  SpectatorDelay: ").Append(SpectatorDelay).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}