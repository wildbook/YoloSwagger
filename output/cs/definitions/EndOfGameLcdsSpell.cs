using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct EndOfGameLcdsSpell
    {
        [DataMember(Name = "spellId")]
        int SpellId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsSpell {\n");
            sb.Append("  SpellId: ").Append(SpellId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}