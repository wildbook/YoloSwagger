using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyCollectionsChampion
    {
        [DataMember(Name = "active")]
        public bool Active { get; set; }

        [DataMember(Name = "botEnabled")]
        public bool BotEnabled { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyCollectionsChampion {\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  BotEnabled: ").Append(BotEnabled).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}