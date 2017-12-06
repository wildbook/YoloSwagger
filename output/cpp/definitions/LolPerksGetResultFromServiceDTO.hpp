#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGetResultFromServiceDTO_t {
    std::string error;
    std::string result;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGetResultFromServiceDTO_t& v) {
    j["error"] = v.error;
    j["result"] = v.result;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGetResultFromServiceDTO_t& v) {
    v.error = j.at("error").get<std::string>();
    v.result = j.at("result").get<std::string>();
  }
}
