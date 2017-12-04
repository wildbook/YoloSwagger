#ifndef SWAGGER_TYPES_PendingRosterDTO_HPP
#define SWAGGER_TYPES_PendingRosterDTO_HPP
#include <json.hpp>
#include "PendingRosterInviteeDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "PendingRosterMemberDTO.hpp"
#include "FailedInvite.hpp"
namespace leagueapi {
  // 
  struct PendingRosterDTO {
    // 
    std::string name;
    // 
    std::vector<FailedInvite> inviteFaileds;
    // 
    int64_t tournamentId;
    // 
    int32_t logoColor;
    // 
    std::vector<TicketOfferDTO> ticketOffers;
    // 
    std::string invitationId;
    // 
    std::vector<PendingRosterMemberDTO> members;
    // 
    int32_t tier;
    // 
    int32_t logo;
    // 
    uint64_t captainId;
    // 
    std::string shortName;
    // 
    std::vector<PendingRosterInviteeDTO> invitees;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterDTO& v) {
    j["name"] = v.name;
    j["inviteFaileds"] = v.inviteFaileds;
    j["tournamentId"] = v.tournamentId;
    j["logoColor"] = v.logoColor;
    j["ticketOffers"] = v.ticketOffers;
    j["invitationId"] = v.invitationId;
    j["members"] = v.members;
    j["tier"] = v.tier;
    j["logo"] = v.logo;
    j["captainId"] = v.captainId;
    j["shortName"] = v.shortName;
    j["invitees"] = v.invitees;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterDTO& v) {
    v.name = j.at("name").get<std::string>;
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite>>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO>>;
    v.invitationId = j.at("invitationId").get<std::string>;
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO>>;
    v.tier = j.at("tier").get<int32_t>;
    v.logo = j.at("logo").get<int32_t>;
    v.captainId = j.at("captainId").get<uint64_t>;
    v.shortName = j.at("shortName").get<std::string>;
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO>>;
  }

}
#endif // SWAGGER_TYPES_PendingRosterDTO_HPP
