using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsGameMap
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "displayName")]
        public string DisplayName { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "minCustomPlayers")]
        public int MinCustomPlayers { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "totalPlayers")]
        public int TotalPlayers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsGameMap {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  MinCustomPlayers: ").Append(MinCustomPlayers).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  TotalPlayers: ").Append(TotalPlayers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}