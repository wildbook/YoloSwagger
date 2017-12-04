#ifndef SWAGGER_TYPES_PatcherComponentResource_HPP
#define SWAGGER_TYPES_PatcherComponentResource_HPP
#include <json.hpp>
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherHeaderEntry.hpp"
namespace leagueapi {
  // 
  struct PatcherComponentResource {
    // 
    bool copy_to_solution;
    // 
    std::vector<PatcherHeaderEntry> headers;
    // 
    PatcherComponentResourceHistory history;
    // 
    std::string hostname;
    // 
    std::string id;
    // 
    std::string install_dir;
    // 
    std::string locale;
    // 
    std::string region;
    // 
    std::string remote_path;
    // 
    PatcherComponentResourceType type;
    // 
    bool use_tls;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResource& v) {
    j["copy_to_solution"] = v.copy_to_solution;
    j["headers"] = v.headers;
    j["history"] = v.history;
    j["hostname"] = v.hostname;
    j["id"] = v.id;
    j["install_dir"] = v.install_dir;
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["remote_path"] = v.remote_path;
    j["type"] = v.type;
    j["use_tls"] = v.use_tls;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResource& v) {
    v.copy_to_solution = j.at("copy_to_solution").get<bool>;
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>;
    v.history = j.at("history").get<PatcherComponentResourceHistory>;
    v.hostname = j.at("hostname").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.install_dir = j.at("install_dir").get<std::string>;
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
    v.remote_path = j.at("remote_path").get<std::string>;
    v.type = j.at("type").get<PatcherComponentResourceType>;
    v.use_tls = j.at("use_tls").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentResource_HPP
