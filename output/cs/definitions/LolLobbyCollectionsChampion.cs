using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyCollectionsChampion
    {
        [DataMember(Name = "active")]
        bool Active { get; set; }

        [DataMember(Name = "botEnabled")]
        bool BotEnabled { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

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