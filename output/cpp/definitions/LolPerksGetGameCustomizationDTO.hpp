#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGetGameCustomizationDTO_t {
    std::string queueType;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGetGameCustomizationDTO_t& v) {
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGetGameCustomizationDTO_t& v) {
    v.queueType = j.at("queueType").get<std::string>();
  }
  inline std::string to_string(const LolPerksGetGameCustomizationDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
