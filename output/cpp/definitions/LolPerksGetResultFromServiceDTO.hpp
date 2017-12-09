#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGetResultFromServiceDTO_t {
    std::string result;
    std::string error;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGetResultFromServiceDTO_t& v) {
    j["result"] = v.result;
    j["error"] = v.error;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGetResultFromServiceDTO_t& v) {
    v.result = j.at("result").get<std::string>();
    v.error = j.at("error").get<std::string>();
  }
  inline std::string to_string(const LolPerksGetResultFromServiceDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
