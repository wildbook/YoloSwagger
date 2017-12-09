#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsResponse_t {
    std::string typeName;
    nlohmann::json body;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsResponse_t& v) {
    j["typeName"] = v.typeName;
    j["body"] = v.body;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsResponse_t& v) {
    v.typeName = j.at("typeName").get<std::string>();
    v.body = j.at("body").get<nlohmann::json>();
  }
  inline std::string to_string(const LolLoginLcdsResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
