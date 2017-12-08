#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsSpell_t {
    int32_t_t spellId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsSpell_t& v) {
    j["spellId"] = v.spellId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsSpell_t& v) {
    v.spellId = j.at("spellId").get<int32_t_t>();
  }
  inline std::string to_string(const EndOfGameLcdsSpell_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
