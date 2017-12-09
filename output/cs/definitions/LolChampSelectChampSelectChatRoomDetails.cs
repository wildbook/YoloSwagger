using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectChampSelectChatRoomDetails
    {
        [DataMember(Name = "chatRoomName")]
        public string ChatRoomName { get; set; }

        [DataMember(Name = "chatRoomPassword")]
        public string ChatRoomPassword { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectChampSelectChatRoomDetails {\n");
            sb.Append("  ChatRoomName: ").Append(ChatRoomName).Append("\n");
            sb.Append("  ChatRoomPassword: ").Append(ChatRoomPassword).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}