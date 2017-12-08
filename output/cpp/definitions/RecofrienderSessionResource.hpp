#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderSessionResource_t {
    uint32_t sessionExpire;
    std::string sessionState;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderSessionResource_t& v) {
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderSessionResource_t& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>();
    v.sessionState = j.at("sessionState").get<std::string>();
  }
  inline std::string to_string(const RecofrienderSessionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
