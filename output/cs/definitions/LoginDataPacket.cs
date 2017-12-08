using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LoginDataPacket
    {
        [DataMember(Name = "timeUntilFirstWinOfDay")]
        ulong TimeUntilFirstWinOfDay { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LoginDataPacket {\n");
            sb.Append("  TimeUntilFirstWinOfDay: ").Append(TimeUntilFirstWinOfDay).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}