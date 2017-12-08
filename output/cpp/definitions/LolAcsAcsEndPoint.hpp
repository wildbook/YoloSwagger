#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAcsAcsEndPoint_t {
    std::string url;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsEndPoint_t& v) {
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsEndPoint_t& v) {
    v.url = j.at("url").get<std::string>();
  }
  inline std::string to_string(const LolAcsAcsEndPoint_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
