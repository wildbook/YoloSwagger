using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyBotChampion
    {
        [DataMember(Name = "active")]
        bool Active { get; set; }

        [DataMember(Name = "botDifficulties")]
        LolLobbyLobbyBotDifficulty[] BotDifficulties { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyBotChampion {\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  BotDifficulties: ").Append(BotDifficulties).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}