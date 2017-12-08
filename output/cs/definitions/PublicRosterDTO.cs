using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PublicRosterDTO
    {
        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "logoColor")]
        int LogoColor { get; set; }

        [DataMember(Name = "memberIds")]
        ulong[] MemberIds { get; set; }

        [DataMember(Name = "logo")]
        int Logo { get; set; }

        [DataMember(Name = "shortName")]
        string ShortName { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PublicRosterDTO {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
            sb.Append("  MemberIds: ").Append(MemberIds).Append("\n");
            sb.Append("  Logo: ").Append(Logo).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}