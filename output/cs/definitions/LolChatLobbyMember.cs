using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatLobbyMember
    {
        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "isOwner")]
        public bool IsOwner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatLobbyMember {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsOwner: ").Append(IsOwner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}