#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksDisabledPerksResource_t {
    std::vector<int32_t> disabledPerks;
  };

  inline void to_json(nlohmann::json& j, const LolPerksDisabledPerksResource_t& v) {
    j["disabledPerks"] = v.disabledPerks;
  }

  inline void from_json(const nlohmann::json& j, LolPerksDisabledPerksResource_t& v) {
    v.disabledPerks = j.at("disabledPerks").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksDisabledPerksResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
