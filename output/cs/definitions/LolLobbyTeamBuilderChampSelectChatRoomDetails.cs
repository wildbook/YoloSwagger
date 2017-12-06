using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampSelectChatRoomDetails
    {
        [DataMember(Name = "chatRoomName")]
        string ChatRoomName { get; set; }

        [DataMember(Name = "chatRoomPassword")]
        string ChatRoomPassword { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampSelectChatRoomDetails {\n");
            sb.Append("  ChatRoomName: ").Append(ChatRoomName).Append("\n");
            sb.Append("  ChatRoomPassword: ").Append(ChatRoomPassword).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}