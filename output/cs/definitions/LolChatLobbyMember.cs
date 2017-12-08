using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatLobbyMember
    {
        [DataMember(Name = "isOwner")]
        bool IsOwner { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatLobbyMember {\n");
            sb.Append("  IsOwner: ").Append(IsOwner).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}