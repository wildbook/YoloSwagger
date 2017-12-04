using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerMembershipWithNotificationsDto {
    [DataMember(Name = "membershipNotifications")]
    MembershipNoficationsDto[] MembershipNotifications {get; set;}

    [DataMember(Name = "playerMembership")]
    PlayerMembershipDto PlayerMembership {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerMembershipWithNotificationsDto {\n");
      sb.Append("  MembershipNotifications: ").Append(MembershipNotifications).Append("\n");
      sb.Append("  PlayerMembership: ").Append(PlayerMembership).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}