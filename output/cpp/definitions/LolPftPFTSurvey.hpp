#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurvey_t {
    std::map<std::string, nlohmann::json> data;
    std::string caption;
    std::string title;
    uint64_t id;
    std::string type;
    std::string display;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurvey_t& v) {
    j["data"] = v.data;
    j["caption"] = v.caption;
    j["title"] = v.title;
    j["id"] = v.id;
    j["type"] = v.type;
    j["display"] = v.display;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurvey_t& v) {
    v.data = j.at("data").get<std::map<std::string, nlohmann::json>>();
    v.caption = j.at("caption").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.display = j.at("display").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTSurvey_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
