using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PublicRosterDTO
    {
        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "logo")]
        public int Logo { get; set; }

        [DataMember(Name = "logoColor")]
        public int LogoColor { get; set; }

        [DataMember(Name = "memberIds")]
        public ulong[] MemberIds { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PublicRosterDTO {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Logo: ").Append(Logo).Append("\n");
            sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
            sb.Append("  MemberIds: ").Append(MemberIds).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}