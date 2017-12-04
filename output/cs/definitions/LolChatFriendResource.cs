using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatFriendResource {
    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "isP2PConversationMuted")]
    bool IsP2PConversationMuted {get; set;}

    [DataMember(Name = "lol")]
    Dictionary<string, string> Lol {get; set;}

    [DataMember(Name = "availability")]
    string Availability {get; set;}

    [DataMember(Name = "note")]
    string Note {get; set;}

    [DataMember(Name = "displayGroupId")]
    uint DisplayGroupId {get; set;}

    [DataMember(Name = "groupId")]
    uint GroupId {get; set;}

    [DataMember(Name = "lastSeenOnlineTimestamp")]
    string LastSeenOnlineTimestamp {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    [DataMember(Name = "statusMessage")]
    string StatusMessage {get; set;}

    [DataMember(Name = "icon")]
    int Icon {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatFriendResource {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  IsP2PConversationMuted: ").Append(IsP2PConversationMuted).Append("\n");
      sb.Append("  Lol: ").Append(Lol).Append("\n");
      sb.Append("  Availability: ").Append(Availability).Append("\n");
      sb.Append("  Note: ").Append(Note).Append("\n");
      sb.Append("  DisplayGroupId: ").Append(DisplayGroupId).Append("\n");
      sb.Append("  GroupId: ").Append(GroupId).Append("\n");
      sb.Append("  LastSeenOnlineTimestamp: ").Append(LastSeenOnlineTimestamp).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  StatusMessage: ").Append(StatusMessage).Append("\n");
      sb.Append("  Icon: ").Append(Icon).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}