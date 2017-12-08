#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderSessionResource_t {
    std::string sessionState;
    uint32_t sessionExpire;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderSessionResource_t& v) {
    j["sessionState"] = v.sessionState;
    j["sessionExpire"] = v.sessionExpire;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderSessionResource_t& v) {
    v.sessionState = j.at("sessionState").get<std::string>();
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>();
  }
  inline std::string to_string(const RecofrienderSessionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
