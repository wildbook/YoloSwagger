using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsPracticeGameSearchResult
    {
        [DataMember(Name = "allowSpectators")]
        public string AllowSpectators { get; set; }

        [DataMember(Name = "gameMap")]
        public LcdsGameMap GameMap { get; set; }

        [DataMember(Name = "gameMapId")]
        public int GameMapId { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "maxNumPlayers")]
        public int MaxNumPlayers { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "owner")]
        public LcdsPlayerParticipant Owner { get; set; }

        [DataMember(Name = "pickType")]
        public string PickType { get; set; }

        [DataMember(Name = "privateGame")]
        public bool PrivateGame { get; set; }

        [DataMember(Name = "spectatorCount")]
        public int SpectatorCount { get; set; }

        [DataMember(Name = "team1Count")]
        public int Team1Count { get; set; }

        [DataMember(Name = "team2Count")]
        public int Team2Count { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsPracticeGameSearchResult {\n");
            sb.Append("  AllowSpectators: ").Append(AllowSpectators).Append("\n");
            sb.Append("  GameMap: ").Append(GameMap).Append("\n");
            sb.Append("  GameMapId: ").Append(GameMapId).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MaxNumPlayers: ").Append(MaxNumPlayers).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  PickType: ").Append(PickType).Append("\n");
            sb.Append("  PrivateGame: ").Append(PrivateGame).Append("\n");
            sb.Append("  SpectatorCount: ").Append(SpectatorCount).Append("\n");
            sb.Append("  Team1Count: ").Append(Team1Count).Append("\n");
            sb.Append("  Team2Count: ").Append(Team2Count).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}