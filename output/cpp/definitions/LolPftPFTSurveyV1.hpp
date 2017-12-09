#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurveyV1_t {
    std::string title;
    std::string caption;
    std::string url;
    std::string type;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyV1_t& v) {
    j["title"] = v.title;
    j["caption"] = v.caption;
    j["url"] = v.url;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyV1_t& v) {
    v.title = j.at("title").get<std::string>();
    v.caption = j.at("caption").get<std::string>();
    v.url = j.at("url").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolPftPFTSurveyV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
