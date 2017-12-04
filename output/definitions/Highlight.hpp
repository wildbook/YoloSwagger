#ifndef SWAGGER_TYPES_Highlight_HPP
#define SWAGGER_TYPES_Highlight_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct Highlight {
    // 
    uint64_t fileSizeBytes;
    // 
    std::string filepath;
    // 
    uint64_t id;
    // 
    std::string mtimeIso8601;
    // 
    uint64_t mtimeMsUtc;
    // 
    std::string name;
    // 
    std::string url;
  };

  void to_json(nlohmann::json& j, const Highlight& v) {
    j["fileSizeBytes"] = v.fileSizeBytes;
    j["filepath"] = v.filepath;
    j["id"] = v.id;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["mtimeMsUtc"] = v.mtimeMsUtc;
    j["name"] = v.name;
    j["url"] = v.url;
  }

  void from_json(const nlohmann::json& j, Highlight& v) {
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>;
    v.filepath = j.at("filepath").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>;
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_Highlight_HPP