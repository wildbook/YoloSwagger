#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsSummoner_t {
    std::string_t name;
    uint64_t_t sumId;
  };

  inline void to_json(nlohmann::json& j, const LcdsSummoner_t& v) {
    j["name"] = v.name;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, LcdsSummoner_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.sumId = j.at("sumId").get<uint64_t_t>();
  }
  inline std::string to_string(const LcdsSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
