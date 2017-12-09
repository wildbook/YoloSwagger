using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct Club
    {
        [DataMember(Name = "key")]
        public string Key { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Club {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}