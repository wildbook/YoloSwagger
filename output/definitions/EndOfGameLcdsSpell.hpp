#ifndef SWAGGER_TYPES_EndOfGameLcdsSpell_HPP
#define SWAGGER_TYPES_EndOfGameLcdsSpell_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsSpell {
    // 
    int32_t spellId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsSpell& v) {
    j["spellId"] = v.spellId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsSpell& v) {
    v.spellId = j.at("spellId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsSpell_HPP
